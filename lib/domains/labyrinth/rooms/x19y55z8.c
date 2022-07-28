inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 55, 8 }));
  set_short( "Hallway - x19y55z8" );
set_objects( DIR+"/npc/snake.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y56z8.c",
  "south" : DIR+"/rooms/x19y54z8.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the purple glow of the glorzo in this area. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
