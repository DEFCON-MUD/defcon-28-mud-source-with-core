inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 39, 53, 9 }));
  set_short( "Corridor - x39y53z9" );
set_objects( DIR+"/npc/probe.c");
 set_exits( ([
  "north" : DIR+"/rooms/x39y54z9.c",
  "south" : DIR+"/rooms/x39y52z9.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the muck in this joint. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
