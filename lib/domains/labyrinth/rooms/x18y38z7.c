inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 18, 38, 7 }));
  set_short( "Corridor - x18y38z7" );
set_objects( DIR+"/npc/doe.c");
 set_exits( ([
  "west" : DIR+"/rooms/x17y38z7.c",
  "east" : DIR+"/rooms/x19y38z7.c"
  ]) );
  set_long( "This is a broad tunnel, illuminated only by the green glow of the crud in this hellhole. The walls and floors are covered with mud. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nYou may be able to find escape to the west, and east.%^RESET%^");
}
