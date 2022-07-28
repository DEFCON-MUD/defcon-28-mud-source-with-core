inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 43, 26, 5 }));
  set_short( "Corridor - x43y26z5" );
set_objects( DIR+"/npc/domeguard.c");
 set_exits( ([
  "east" : DIR+"/rooms/x44y26z5.c",
  "north" : DIR+"/rooms/x43y27z5.c",
  "south" : DIR+"/rooms/x43y25z5.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the orange glow of the gunk in this area. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the east, north, and west.%^RESET%^");
}
