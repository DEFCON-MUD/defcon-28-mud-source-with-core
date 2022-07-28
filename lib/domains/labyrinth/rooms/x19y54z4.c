inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 54, 4 }));
  set_short( "Hallway - x19y54z4" );
set_objects( DIR+"/npc/raddgoo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x18y54z4.c",
  "south" : DIR+"/rooms/x19y53z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the blue glow of the gunk in this area. The walls and floors are covered with liquid. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and west.%^RESET%^");
}
