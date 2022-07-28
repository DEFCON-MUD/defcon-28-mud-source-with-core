inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 23, 52, 1 }));
  set_short( "Hallway - x23y52z1" );
set_objects( DIR+"/npc/eastauthorizer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x22y52z1.c",
  "north" : DIR+"/rooms/x23y53z1.c",
  "south" : DIR+"/rooms/x23y51z1.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the crappy sales material in this dump. The walls and floors are covered with dust. The smell is outright dreadful.%^RESET%^\n\nThe sewer continues to the west, north, and west.%^RESET%^");
}
