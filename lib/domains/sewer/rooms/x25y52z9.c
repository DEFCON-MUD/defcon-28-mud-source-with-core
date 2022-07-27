inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 25, 52, 9 }));
  set_short( "Passage - x25y52z9" );
set_objects( DIR+"/monsters/ferret.c");
 set_exits( ([
  "west" : DIR+"/rooms/x24y52z9.c",
  "south" : DIR+"/rooms/x25y51z9.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the green glow of the radioactive waste in this joint. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and west.%^RESET%^");
}
