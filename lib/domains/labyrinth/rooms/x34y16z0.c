inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 34, 16, 0 }));
  set_short( "Corridor - x34y16z0" );
set_objects( DIR+"/npc/vipbouncer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x33y16z0.c",
  "east" : DIR+"/rooms/x35y16z0.c"
  ]) );
  set_long( "This is a cramped tunnel, illuminated only by the purple glow of the crud in this area. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
