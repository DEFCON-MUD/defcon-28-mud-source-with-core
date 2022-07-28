inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 10, 9 }));
  set_short( "Hallway - x5y10z9" );
set_objects( DIR+"/npc/r1physicist.c");
 set_exits( ([
  "west" : DIR+"/rooms/x4y10z9.c",
  "east" : DIR+"/rooms/x6y10z9.c",
  "south" : DIR+"/rooms/x5y9z9.c"
  ]) );
  set_long( "This is a wide hallway, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, east, and west.%^RESET%^");
}
