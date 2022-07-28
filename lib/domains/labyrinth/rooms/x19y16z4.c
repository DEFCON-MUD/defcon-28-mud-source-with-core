inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 16, 4 }));
  set_short( "Hallway - x19y16z4" );
set_objects( DIR+"/npc/lyndia.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y16z4.c",
  "south" : DIR+"/rooms/x19y15z4.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the green glow of the pile of GPUs that burned so bright they went radioactive in this area. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
