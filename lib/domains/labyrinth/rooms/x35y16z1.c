inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 35, 16, 1 }));
  set_short( "Hallway - x35y16z1" );
set_objects( DIR+"/npc/csccagent.c");
 set_exits( ([
  "west" : DIR+"/rooms/x34y16z1.c",
  "north" : DIR+"/rooms/x35y17z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the pile of put kevin back stickers in this sty. The walls and floors are covered with liquid. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe sewer continues to the west, and north.%^RESET%^");
}
