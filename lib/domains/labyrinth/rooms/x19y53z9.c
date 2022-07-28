inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 53, 9 }));
  set_short( "Corridor - x19y53z9" );
set_objects( DIR+"/npc/raddgoo.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y54z9.c",
  "south" : DIR+"/rooms/x19y52z9.c"
  ]) );
  set_long( "This is a broad corridor, illuminated only by the green glow of the gunk in this hellhole. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
