inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 61, 47, 7 }));
  set_short( "Hallway - x61y47z7" );
set_objects( DIR+"/npc/groupie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x61y48z7.c",
  "south" : DIR+"/rooms/x61y46z7.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the green glow of the muck in this hellhole. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
