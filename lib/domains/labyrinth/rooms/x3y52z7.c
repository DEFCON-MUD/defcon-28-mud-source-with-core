inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 3, 52, 7 }));
  set_short( "Corridor - x3y52z7" );
set_objects( DIR+"/npc/banker.c");
 set_exits( ([
  "east" : DIR+"/rooms/x4y52z7.c",
  "south" : DIR+"/rooms/x3y51z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the crud in this joint. The walls and floors are covered with slime. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nYou may be able to find escape to the east, and west.%^RESET%^");
}
