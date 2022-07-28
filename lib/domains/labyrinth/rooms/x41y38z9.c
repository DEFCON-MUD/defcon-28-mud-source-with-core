inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 38, 9 }));
  set_short( "Passage - x41y38z9" );
set_objects( DIR+"/npc/boa.c");
 set_exits( ([
  "east" : DIR+"/rooms/x42y38z9.c",
  "north" : DIR+"/rooms/x41y39z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the orange glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
