inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 42, 58, 9 }));
  set_short( "Passage - x42y58z9" );
set_objects( DIR+"/npc/debra.c");
 set_exits( ([
  "west" : DIR+"/rooms/x41y58z9.c",
  "east" : DIR+"/rooms/x43y58z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with dust. To add to that, the smell here isn't exactly perfumy either.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
