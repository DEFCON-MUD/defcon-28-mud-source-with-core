inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 6, 2 }));
  set_short( "Corridor - x7y6z2" );
set_objects( DIR+"/npc/rattlesnake.c");
 set_exits( ([
  "west" : DIR+"/rooms/x6y6z2.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the crud in this area. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west.%^RESET%^");
}
