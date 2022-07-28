inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 11, 12, 6 }));
  set_short( "Hallway - x11y12z6" );
set_objects( DIR+"/npc/warrior.c");
 set_exits( ([
  "east" : DIR+"/rooms/x12y12z6.c",
  "north" : DIR+"/rooms/x11y13z6.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the sludge in this joint. The walls and floors are covered with oil. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
