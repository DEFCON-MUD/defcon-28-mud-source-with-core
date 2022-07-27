inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 5, 55, 0 }));
  set_short( "Passage - x5y55z0" );
set_objects( DIR+"/monsters/lil.c");
 set_exits( ([
  "north" : DIR+"/rooms/x5y56z0.c",
  "south" : DIR+"/rooms/x5y54z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the iridium glow of the radioactive waste in this joint. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
