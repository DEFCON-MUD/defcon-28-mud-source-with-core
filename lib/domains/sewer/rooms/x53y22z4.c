inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 53, 22, 4 }));
  set_short( "Corridor - x53y22z4" );
set_objects( DIR+"/monsters/kavi.c");
 set_exits( ([
  "east" : DIR+"/rooms/x54y22z4.c",
  "north" : DIR+"/rooms/x53y23z4.c"
  ]) );
  set_long( "This is a cramped corridor, illuminated only by the green glow of the crud in this area. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the east, and north.%^RESET%^");
}
