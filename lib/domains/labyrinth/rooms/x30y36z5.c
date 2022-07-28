inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 30, 36, 5 }));
  set_short( "Hallway - x30y36z5" );
set_objects( DIR+"/npc/ken.c");
 set_exits( ([
  "west" : DIR+"/rooms/x29y36z5.c",
  "east" : DIR+"/rooms/x31y36z5.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the crud in this sty. The walls and floors are covered with dust. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
