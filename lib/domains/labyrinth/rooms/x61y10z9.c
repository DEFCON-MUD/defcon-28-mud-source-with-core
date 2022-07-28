inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 10, 9 }));
  set_short( "Corridor - x61y10z9" );
set_objects( DIR+"/npc/tom.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y11z9.c",
  "south" : DIR+"/rooms/x61y9z9.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the muck in this hellhole. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
