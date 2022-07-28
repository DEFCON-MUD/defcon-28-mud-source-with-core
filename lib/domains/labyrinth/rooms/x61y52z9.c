inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 52, 9 }));
  set_short( "Hallway - x61y52z9" );
set_objects( DIR+"/npc/randy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x60y52z9.c",
  "north" : DIR+"/rooms/x61y53z9.c",
  "south" : DIR+"/rooms/x61y51z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with blood. It smells like a hacker convention in here.%^RESET%^\n\nThe sewer continues to the west, north, and west.%^RESET%^");
}
