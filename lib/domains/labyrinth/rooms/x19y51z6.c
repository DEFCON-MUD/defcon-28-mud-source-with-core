inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 51, 6 }));
  set_short( "Hallway - x19y51z6" );
set_objects( DIR+"/npc/eastmaintenancedroid.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y52z6.c",
  "south" : DIR+"/rooms/x19y50z6.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the crud in this hellhole. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
