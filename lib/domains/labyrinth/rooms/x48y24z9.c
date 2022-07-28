inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 24, 9 }));
  set_short( "Hallway - x48y24z9" );
set_objects( DIR+"/npc/teacher.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y24z9.c",
  "east" : DIR+"/rooms/x49y24z9.c"
  ]) );
  set_long( "This is a wide tunnel, illuminated only by the red glow of the crud in this sty. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
