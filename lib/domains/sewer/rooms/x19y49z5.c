inherit "/std/room";

#include "../domain.h"

void setup( void ) {
  add_area( "labyrinth" );
  set_coords(({ 19, 49, 5 }));
  set_short( "Hallway - x19y49z5" );
set_objects( DIR+"/monsters/slowzombie.c");
 set_exits( ([
  "north" : DIR+"/rooms/x19y50z5.c",
  "south" : DIR+"/rooms/x19y48z5.c"
  ]) );
  set_long( "This is a wide corridor, illuminated only by the orange glow of the crud in this dump. The walls and floors are covered with oil. Musty air that doesn't seem to have been ventilated for a while brushes up against you as you move around here.%^RESET%^\n\nThe horror continues to the north, and west.%^RESET%^");
}
