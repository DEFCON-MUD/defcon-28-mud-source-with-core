inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 51, 48, 1 }));
  set_short( "Passage - x51y48z1" );
set_objects( DIR+"/monsters/dba.c");
 set_exits( ([
  "west" : DIR+"/rooms/x50y48z1.c",
  "east" : DIR+"/rooms/x52y48z1.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the red glow of the crappy sales material in this sty. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
