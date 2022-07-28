inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 31, 15, 7 }));
  set_short( "Hallway - x31y15z7" );
set_objects( DIR+"/npc/bol.c");
 set_exits( ([
  "north" : DIR+"/rooms/x31y16z7.c",
  "south" : DIR+"/rooms/x31y14z7.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the green glow of the crud in this joint. The walls and floors are covered with mud. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
