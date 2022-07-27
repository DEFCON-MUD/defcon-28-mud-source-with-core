inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 57, 34, 4 }));
  set_short( "Corridor - x57y34z4" );
set_objects( DIR+"/monsters/pasties.c");
 set_exits( ([
  "east" : DIR+"/rooms/x58y34z4.c",
  "north" : DIR+"/rooms/x57y35z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the iridium glow of the gunk in this hellhole. The walls and floors are covered with blood. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
