inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 44, 62, 3 }));
  set_short( "Hallway - x44y62z3" );
set_objects( DIR+"/monsters/fireant.c");
 set_exits( ([
  "west" : DIR+"/rooms/x43y62z3.c",
  "east" : DIR+"/rooms/x45y62z3.c"
  ]) );
  set_long( "This is a narrow corridor, illuminated only by the orange glow of the crud in this sty. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
