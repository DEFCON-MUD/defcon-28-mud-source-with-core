inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 27, 40, 1 }));
  set_short( "Passage - x27y40z1" );
set_objects( DIR+"/monsters/treelizard.c");
 set_exits( ([
  "north" : DIR+"/rooms/x27y41z1.c",
  "south" : DIR+"/rooms/x27y39z1.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the gunk in this sty. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
