inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 52, 2, 3 }));
  set_short( "Corridor - x52y2z3" );
set_objects( DIR+"/npc/officer.c");
 set_exits( ([
  "west" : DIR+"/rooms/x51y2z3.c",
  "east" : DIR+"/rooms/x53y2z3.c"
  ]) );
  set_long( "This is a cramped hallway, illuminated only by the red glow of the gunk in this dump. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the west, and east.%^RESET%^");
}
