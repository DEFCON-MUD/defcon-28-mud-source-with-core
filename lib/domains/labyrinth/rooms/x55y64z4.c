inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 55, 64, 4 }));
  set_short( "Hallway - x55y64z4" );
set_objects( DIR+"/npc/lil.c");
 set_exits( ([
  "west" : DIR+"/rooms/x54y64z4.c",
  "east" : DIR+"/rooms/x56y64z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the glorzo in this area. The walls and floors are covered with dust. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
