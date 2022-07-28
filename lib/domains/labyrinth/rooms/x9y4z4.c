inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 4, 4 }));
  set_short( "Passage - x9y4z4" );
set_objects( DIR+"/npc/wendy.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y4z4.c",
  "north" : DIR+"/rooms/x9y5z4.c"
  ]) );
  set_long( "This is a broad hallway, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this joint. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and north.%^RESET%^");
}
