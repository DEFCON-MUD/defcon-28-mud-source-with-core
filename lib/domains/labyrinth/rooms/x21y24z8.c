inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 21, 24, 8 }));
  set_short( "Passage - x21y24z8" );
set_objects( DIR+"/npc/csccagent.c");
 set_exits( ([
  "north" : DIR+"/rooms/x21y25z8.c",
  "south" : DIR+"/rooms/x21y23z8.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the orange glow of the pile of put kevin back stickers in this area. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
