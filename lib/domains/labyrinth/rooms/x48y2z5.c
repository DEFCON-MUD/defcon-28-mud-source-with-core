inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 48, 2, 5 }));
  set_short( "Corridor - x48y2z5" );
set_objects( DIR+"/npc/raddgoo.c");
 set_exits( ([
  "west" : DIR+"/rooms/x47y2z5.c",
  "east" : DIR+"/rooms/x49y2z5.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the orange glow of the muck in this area. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
