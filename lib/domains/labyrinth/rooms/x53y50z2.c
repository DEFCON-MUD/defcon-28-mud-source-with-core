inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 50, 2 }));
  set_short( "Corridor - x53y50z2" );
set_objects( DIR+"/npc/ratqueen.c");
 set_exits( ([
  "east" : DIR+"/rooms/x54y50z2.c",
  "north" : DIR+"/rooms/x53y51z2.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the orange glow of the crud in this hellhole. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe sewer continues to the east, and north.%^RESET%^");
}
