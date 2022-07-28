inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 14, 52, 7 }));
  set_short( "Corridor - x14y52z7" );
set_objects( DIR+"/npc/kendall.c");
 set_exits( ([
  "west" : DIR+"/rooms/x13y52z7.c",
  "east" : DIR+"/rooms/x15y52z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the purple glow of the crud in this area. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
