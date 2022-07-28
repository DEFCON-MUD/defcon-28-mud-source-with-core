inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 16, 1 }));
  set_short( "Corridor - x23y16z1" );
set_objects( DIR+"/npc/leader.c");
 set_exits( ([
  "east" : DIR+"/rooms/x24y16z1.c",
  "north" : DIR+"/rooms/x23y17z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the gunk in this hellhole. The walls and floors are covered with slime. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
