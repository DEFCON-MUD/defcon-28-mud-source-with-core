inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 37, 26, 0 }));
  set_short( "Corridor - x37y26z0" );
set_objects( DIR+"/npc/bugsy.c");
 set_exits( ([
  "north" : DIR+"/rooms/x37y27z0.c",
  "south" : DIR+"/rooms/x37y25z0.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the red glow of the muck in this dump. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
