inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 36, 12, 9 }));
  set_short( "Corridor - x36y12z9" );
set_objects( DIR+"/npc/gana.c");
 set_exits( ([
  "west" : DIR+"/rooms/x35y12z9.c",
  "east" : DIR+"/rooms/x37y12z9.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the red glow of the muck in this dump. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
