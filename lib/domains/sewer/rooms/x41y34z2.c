inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 41, 34, 2 }));
  set_short( "Corridor - x41y34z2" );
set_objects( DIR+"/monsters/raddgoo.c");
 set_exits( ([
  "north" : DIR+"/rooms/x41y35z2.c",
  "south" : DIR+"/rooms/x41y33z2.c"
  ]) );
  set_long( "This is a narrow tunnel, illuminated only by the iridium glow of the gunk in this joint. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the north, and west.%^RESET%^");
}
