inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 46, 52, 5 }));
  set_short( "Hallway - x46y52z5" );
set_objects( DIR+"/npc/cockroach.c");
 set_exits( ([
  "west" : DIR+"/rooms/x45y52z5.c",
  "east" : DIR+"/rooms/x47y52z5.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the crud in this area. The walls and floors are covered with mud. The smell.....that musty smell.....nothing else quite smells like that.....it smells like.......DEFCON.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
