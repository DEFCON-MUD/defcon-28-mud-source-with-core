inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 8, 12, 7 }));
  set_short( "Corridor - x8y12z7" );
set_objects( DIR+"/monsters/mutatekroh.c");
 set_exits( ([
  "west" : DIR+"/rooms/x7y12z7.c",
  "east" : DIR+"/rooms/x9y12z7.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the radioactive waste in this joint. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
