inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 15, 2, 1 }));
  set_short( "Hallway - x15y2z1" );
set_objects( DIR+"/npc/slime.c");
 set_exits( ([
  "east" : DIR+"/rooms/x16y2z1.c",
  "north" : DIR+"/rooms/x15y3z1.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the crud in this dump. The walls and floors are covered with oil. The air smells like it hasn't been cycled in a while, you are getting dizzy.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
