inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 59, 53, 4 }));
  set_short( "Passage - x59y53z4" );
set_objects( DIR+"/npc/r1carmella.c");
 set_exits( ([
  "north" : DIR+"/rooms/x59y54z4.c",
  "south" : DIR+"/rooms/x59y52z4.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the iridium glow of the crap in this hellhole. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the north, and west.%^RESET%^");
}
