inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 10, 3 }));
  set_short( "Corridor - x53y10z3" );
set_objects( DIR+"/npc/Gl0Rz0.c");
 set_exits( ([
  "west" : DIR+"/rooms/x52y10z3.c",
  "east" : DIR+"/rooms/x54y10z3.c"
  ]) );
  set_long( "This is a narrow hallway, illuminated only by the green glow of the crud in this area. The walls and floors are covered with slime. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe sewer continues to the west, and east.%^RESET%^");
}
