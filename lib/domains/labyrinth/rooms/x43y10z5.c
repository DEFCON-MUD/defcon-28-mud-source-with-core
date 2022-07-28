inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 10, 5 }));
  set_short( "Hallway - x43y10z5" );
set_objects( DIR+"/npc/officer.c");
 set_exits( ([
  "east" : DIR+"/rooms/x44y10z5.c",
  "north" : DIR+"/rooms/x43y11z5.c",
  "south" : DIR+"/rooms/x43y9z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the crappy sales material in this joint. The walls and floors are covered with liquid. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the east, north, and west.%^RESET%^");
}
