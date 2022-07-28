inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 49, 10, 4 }));
  set_short( "Corridor - x49y10z4" );
set_objects( DIR+"/npc/sandworm.c");
 set_exits( ([
  "east" : DIR+"/rooms/x50y10z4.c",
  "south" : DIR+"/rooms/x49y9z4.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the pile of GPUs that burned so bright they went radioactive in this dump. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the east, and west.%^RESET%^");
}
