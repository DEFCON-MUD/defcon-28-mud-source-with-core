inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 22, 1 }));
  set_short( "Hallway - x9y22z1" );
set_objects( DIR+"/npc/olasha.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y22z1.c",
  "south" : DIR+"/rooms/x9y21z1.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the pile of put kevin back stickers in this joint. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
