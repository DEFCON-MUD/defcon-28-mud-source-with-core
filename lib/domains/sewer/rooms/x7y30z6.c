inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 7, 30, 6 }));
  set_short( "Passage - x7y30z6" );
set_objects( DIR+"/monsters/mutatekroh.c");
 set_exits( ([
  "east" : DIR+"/rooms/x8y30z6.c",
  "north" : DIR+"/rooms/x7y31z6.c",
  "south" : DIR+"/rooms/x7y29z6.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the pile of GPUs that burned so bright they went radioactive in this sty. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the east, north, and west.%^RESET%^");
}
