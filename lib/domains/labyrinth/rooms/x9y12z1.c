inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 9, 12, 1 }));
  set_short( "Passage - x9y12z1" );
set_objects( DIR+"/npc/domeguard.c");
 set_exits( ([
  "west" : DIR+"/rooms/x8y12z1.c",
  "north" : DIR+"/rooms/x9y13z1.c",
  "south" : DIR+"/rooms/x9y11z1.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this hellhole. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, north, and west.%^RESET%^");
}
