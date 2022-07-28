inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 16, 12, 8 }));
  set_short( "Corridor - x16y12z8" );
set_objects( DIR+"/npc/bob.c");
 set_exits( ([
  "west" : DIR+"/rooms/x15y12z8.c",
  "east" : DIR+"/rooms/x17y12z8.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the purple glow of the sludge in this area. The walls and floors are covered with blood. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
