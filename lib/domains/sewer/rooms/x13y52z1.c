inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 13, 52, 1 }));
  set_short( "Passage - x13y52z1" );
set_objects( DIR+"/monsters/weevil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x12y52z1.c",
  "east" : DIR+"/rooms/x14y52z1.c",
  "north" : DIR+"/rooms/x13y53z1.c",
  "south" : DIR+"/rooms/x13y51z1.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the purple glow of the gunk in this joint. The walls and floors are covered with blood. The smell is outright dreadful.%^RESET%^\n\nThe horror continues to the west, east, north, and west.%^RESET%^");
}
