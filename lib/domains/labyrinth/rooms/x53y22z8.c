inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 22, 8 }));
  set_short( "Corridor - x53y22z8" );
set_objects( DIR+"/npc/fireant.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y22z8.c",
  "east" : DIR+"/rooms/x54y22z8.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the purple glow of the muck in this area. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
